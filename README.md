# EmoT

![](https://github.com/0x0c/EmoT/raw/master/asset/photo/img.JPG)

## Requirements

- [Arduino Due](https://store.arduino.cc/usa/arduino-due)
- [Anker Astro E7](https://jp.anker.com/products/A1210012)
- [Flexible 16x16 NeoPixel RGB LED Matrix](https://www.adafruit.com/product/2547)
- [曲げセンサ](https://www.sparkfun.com/products/8606) * 5個
- [Konashi](http://konashi.ux-xu.com)
- [加圧インナー](https://www.amazon.co.jp/InField-加圧インナー-補正下着-ダイエット-コンプレッションウェア/dp/B01H8E9TIO)
- [Tシャツ](https://www.amazon.co.jp/dp/B0063XSIEI/ref=pe_2107282_266464282_TE_3p_dp_1)（適当なシャツでOK）
- [ウエストポーチ](https://www.amazon.co.jp/EYST-ランナーウェストポーチ-厚さわずか1mm-海外＆国内旅行用セキュリティポーチ-5-5インチまでのスマホ収納可能/dp/B01JOB6MMA)

## Usage

### Wear

0. 加圧インナーをTシャツの中に着る。
0. Arduino Dueをポーチに入れる。
0. バッテリーとArduino Due, LEDマトリクスを接続する。

### Pose Calibration

0. `Arduino/EmoT_Calibration/EmoT_Calibration.ino`をArduino Dueに書き込む。
0. センサスーツとArduino Dueを接続する。
0. Arduinoのコンソールでラベルを入力しEnterを押す。押したタイミングからセンサ値の読み出しを繰り返すので、認識させたいポーズを取る。
0. ポーズデータが集まったらWekaを使い分類する。`Classify > More Option`から`Output source code`にチェックを入れる。テキストフィールドには`PoseDetector`と入力する。
0. Wekaが出力したJavaのコードを`Arduino/EmoT_Calibration`に`PoseDetector.java`という名前で保存する。
0. コマンドラインから`python replace.py`を実行する。
0. 出力された`PoseDetector.h`を`Arduino/EmoT_firmware`以下にコピーする。

### App

0. Konashiに接続することでiPhone/iPod touchから操作可能。
0. Manual Modeをタッチすることで操作可能状態になる。
0. もう一度タッチするとポーズ推定モードに移行する。
0. Demo Modeは一度タッチすると5秒おきに表示が変わる。途中で中断できないので、すぐやめたいときはArduino Dueを再起動する（リセットボタンを押す）。

## Sensor Suit

### 曲げセンサの位置
- 肩 * 2個
- 胸 * 2個
- 背中 * 1個

詳細は`asset/sensor_suit`以下の写真参考。

## その他
- `EmoT_LED_Test`と`EmoT_SensorTest`はLEDマトリクスやセンサの動作確認用。
- `cad`以下のstlファイルはセンサスーツに曲げセンサを固定するためのパーツ。
- `tool/weka/weka_cli_command.sh`はWekaのSimple CLIからコードを生成するときのコマンド。
- `tool/emoji2code`は絵文字画像をC言語の配列に変換する。`./gen.sh <filename>`で`filename.txt`というテキストファイルが生成される。pngファイルのみ対応。ImageMagickが必要。

## Caption
私たちは言葉や身体の動きを使って人とコミュニケーションする。 言葉を声に出しながら、表情を変え、ジェスチャーを交えることで、自分の思いを相手に伝える。絵文字はこれらを代替してくれるツールだ。表情やジェスチャーが伝わらないメールやチャットでのコミュニケーションにおいて、テキストだけでは伝わらない思いを絵に込めて、相手に伝えることができる。 しかし、絵文字はコンピュータの世界でしか使うことができない。この作品は、身体の動きに合わせて絵文字を洋服に転写することで絵文字を実空間に持ち込むみコミュニケーションを拡張するとともに、心の「すきま」から漏れる伝えきれない思いを表現する。（東京大学制作展Extra SUKIMANIAC）

## Exhibition
- 東京大学制作展Extra SUKIMANIAC, 7/7~7/10, 2017
- TEDxUTokyo, 7/16, 2017
- Maker Faire Tokyo, 8/5~8/6, 2017
