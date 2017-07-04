difference() {
    translate([-9, -5, 0])
    cube([18, 10, 5]);
    
    translate([5, -5, 3])
    cube([5, 10, 3]);
    
    translate([-10, -5, 3])
    cube([5, 10, 3]);
    
    translate([7, 0, 0])
    cylinder(h=10, r1=1, r2=0, $fn=100);
    
    translate([-7, 0, 0])
    cylinder(h=10,r1=1, r2=0, $fn=100);
    
    translate([0, 0, -28])
    rotate([90,0,0])
    cylinder(h=11, r1=30, r2=30, center=true, $fn=100);
    
    translate([0, 0, 3])
    cube([6.7, 10, 1], center = true);
}
