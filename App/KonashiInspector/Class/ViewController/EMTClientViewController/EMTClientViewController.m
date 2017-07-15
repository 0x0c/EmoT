//
//  ViewController.m
//  EmoTClient
//
//  Created by Akira Matsuda on 2017/07/06.
//  Copyright © 2017 Akira Matsuda. All rights reserved.
//

#import "EMTClientViewController.h"
#import "Konashi.h"

@interface EMTClientViewController ()

@property (nonatomic, strong) NSArray<NSArray<NSString *> *> *emojis;
@property (nonatomic, assign) BOOL autoModeEnabled;
@property (nonatomic, assign) BOOL manualModeEnabled;

@end

@implementation EMTClientViewController

- (void)viewDidLoad {
	[super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
	self.emojis = @[
  @[@"💪", @"2"],
  @[@"🚫", @"b"],
  @[@"🍺", @"4"],
  @[@"👺", @"7"],
  @[@"🙏", @"6"],
  @[@"🍣", @"8"],
  @[@"🔥", @"d"],
  @[@"🙇", @"a"],
  @[@"✌️", @"3"],
  @[@"☹️", @"e"],
  @[@"✅", @"c"],
  @[@"❓", @"1"],
  @[@"❗️", @"9"],
  @[@"❤️", @"5"],
  @[@"Hide", @"-"]];
	
	[[Konashi shared] setUartRxCompleteHandler:^(NSData *data) {
		NSString *string = [[NSString alloc] initWithData:data encoding:NSASCIIStringEncoding];
		NSLog(@"uart RX complete:%@(%@:length = %ld)", string, [data description], (unsigned long)data.length);
	}];
	[Konashi shared].connectedHandler = ^{
		[Konashi uartMode:KonashiUartModeEnable baudrate:KonashiUartBaudrateRate9K6];
	};
	[Konashi uartMode:KonashiUartModeEnable baudrate:KonashiUartBaudrateRate9K6];
}

- (void)didReceiveMemoryWarning {
	[super didReceiveMemoryWarning];
	// Dispose of any resources that can be recreated.
}

#pragma mark - UITableVideDataSource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
	return 2;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
	return section == 0 ? 2 : self.emojis.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
	UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"Cell"];
	if (cell == nil) {
		cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:@"Cell"];
	}
	
	if (indexPath.section == 0) {
		if (indexPath.row == 0) {
			cell.textLabel.text = @"Manual mode";
			cell.detailTextLabel.text = self.manualModeEnabled ? @"enabled" : @"disabled";
		}
		else {
			cell.textLabel.text = @"Demo mode";
			cell.detailTextLabel.text = self.autoModeEnabled ? @"enabled" : @"disabled";
		}
	}
	else {
		NSArray *emoji = self.emojis[indexPath.row];
		cell.textLabel.text = emoji.firstObject;
		cell.detailTextLabel.text = emoji.lastObject;
	}
	
	return cell;
}

#pragma mark - UITableViewDelegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
	if (indexPath.section == 0) {
		if (indexPath.row == 0) {
			self.manualModeEnabled = !self.manualModeEnabled;
			if (self.manualModeEnabled) {
				// ON
				[Konashi uartWriteString:@"~."];
			}
			else {
				// OFF
				[Konashi uartWriteString:@"!."];
			}
		}
		else {
			self.autoModeEnabled = !self.autoModeEnabled;
			if (self.autoModeEnabled) {
				// ON
				[Konashi uartWriteString:@"=."];
			}
			else {
				// OFF
				[Konashi uartWriteString:@"+."];
			}
		}
		[tableView reloadData];
	}
	else {
		NSArray *emoji = self.emojis[indexPath.row];
		NSString *string = [NSString stringWithFormat:@"%@.", emoji.lastObject];
		[Konashi uartWriteString:string];
		NSLog(@"uart string send : %@", string);
	}
	[tableView deselectRowAtIndexPath:tableView.indexPathForSelectedRow animated:YES];
}

@end
