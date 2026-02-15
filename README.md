# Girasole40
Girasole40はタッチパッドを中央に配置した、30%オーソリニアレイアウトのロープロファイルコンパクトキーボードです。<br/>
The Girasole40 is the self-maid compact lowprofile keyboard which targets 30% ortholinear layout with a touchpad.

![Picture of Girasole40 without case](images/Girasole40-caseless.jpg)

## Parts List

### Parts need to be prepared/purchased

|Part|Quantity|Where I bought it|Remarks|
|---|---|---|---|
|Wired controller board|1|AliExpress|RP2040-Zero (w/ pin headers)|
|USB-C cable|1|-||
|Choc socket|40|yushakobo|e.g. Kailh PG1350 KeySwitches Contact (CPG135001S30)|
|Choc V2 switch|40|AliExpress||
|Keycap|40|Amazon||
|Touchpad Module TPS65 (or clone module)|1|MOUSER|I confirmed [GR-Trackpad65](https://github.com/geek-rabb1t/GR-Trackpad65) works for this keyboard|
|Polycarbonate sheet for touchpad (0.5mm thickness) <br/>or<br/> PVC sheet for touchpad (0.5mm thikness)|1|Amazon|Need to be cut to suit TPS65|
|PET double-sided adhesive sheet|1|Amazon|Need to be cut to suit TPS65|
|M2 Spacer (3.5mm)|4|yushakobo|Spacers for between main plate and touchpad mounting plate|
|M2 Spacer (5.0mm)|6|yushakobo|Spacers for between top plate and bottom plate.|
|M2 screw (3.5mm)|20|yushakobo|-|
|FPC cable (6pin, 0.5mm pitch, 50mm length)|1|Amazon|-|
|Diode|40|MOUSER|1N4148W|
|Resister 1608 1Kohm|2|akizukidenshi|-|
|Capaciter 1608 10uF|1|akizukidenshi|-|
|FPC socket (6pin, 0.5mm pitch)|1|Amazon|-|
|Rubber feet|6|Amazon|-|

### Parts need to be ordered/printed
For the plate stacking configuration

|Part|Quantity|Remarks|
|---|---|---|
|Main PCB|1|<image src="images/plate-main.png" height="100px"><br/>gerber/main.zip|
|Top Plate|1|<image src="images/plate-top.png" height="100px"><br/>gerber/top.zip|
|Bottom plate|1|<image src="images/plate-bottom.png" height="100px"><br/>gerber/bottom.zip|
|Touchpad mounting plate|1|<image src="images/plate-touchpad.png" height="100px"><br/>gerber/touchpad.zip|

### Parts need for gasket mount case

|Part|Quantity|Remarks|
|---|---|---|
|M2 x 8mm|4| |
|1.6mm height M2 nut|4| |
|diameter 4mm, 0.2mm, 5mm spring|2| |

## Build Guide (plate stacking configuration)
### Assemble passive components on the main PCB
Solder a FPC socket, resisters, a capaciter on front side of the main PCB.

![Build Guide - Main PCB 01](images/BuildGuide-mainpcb-01.jpg)

Solder diodes and Choc sockets on back side of the main PCB.

![Build Guide - Main PCB 02](images/BuildGuide-mainpcb-02.jpg)

Insert pin headers from back side of the main PCB. Then put RP2040-Zero upside down (place USB-C connector down) from front side.

![Build Guide - Main PCB 03](images/BuildGuide-mainpcb-03.jpg)

![Build Guide - Main PCB 04](images/BuildGuide-mainpcb-04.jpg)

Solder RP2040-Zero from front side.

![Build Guide - Main PCB 05](images/BuildGuide-mainpcb-05.jpg)

On back side, remove off the yello parts of the pin header. Then solder RP2040-Zero from back side.

![Build Guide - Main PCB 06](images/BuildGuide-mainpcb-06.jpg)

![Build Guide - Main PCB 07](images/BuildGuide-mainpcb-07.jpg)

![Build Guide - Main PCB 08](images/BuildGuide-mainpcb-08.jpg)

Shorten pin headers by cut them off.

![Build Guide - Main PCB 09](images/BuildGuide-mainpcb-09.jpg)


### Assemble the touchpad
Put a double-sided adhesive sheet on the touchpad module.

![Build Guide - Touchpad 01](images/BuildGuide-touchpad-01.jpg)

![Build Guide - Touchpad 02](images/BuildGuide-touchpad-02.jpg)

Put a Polycarbonate or PVC sheet on the adhesive sheet.

![Build Guide - Touchpad 03](images/BuildGuide-touchpad-03.jpg)

![Build Guide - Touchpad 04](images/BuildGuide-touchpad-04.jpg)

Put a double-sided adhesive sheet on the touchpad mounting plate. Then put the touchpad module on it.

![Build Guide - Touchpad 05](images/BuildGuide-touchpad-05.jpg)

![Build Guide - Touchpad 06](images/BuildGuide-touchpad-06.jpg)


### Construct the keyboard
Place the Top Plate on the Main PCB and put Choc V2 keyswitchs.

![Build Guide - Construction 01](images/BuildGuide-construction-01.jpg)

Put M2 Spacers on both Top Plate and Main PCB.

![Build Guide - Construction 02](images/BuildGuide-construction-02.jpg)

Connect the Main PCB and the touchpad module using FPC cable.

![Build Guide - Construction 03](images/BuildGuide-construction-03.jpg)

Fix the touchpad mounting plate and Main PCB.

![Build Guide - Construction 04](images/BuildGuide-construction-04.jpg)

Fix the Top Plate and the Bottom Plate. Then put rubber feats.

![Build Guide - Construction 05](images/BuildGuide-construction-05.jpg)

Finally, put keycaps.

![Build Guide - Construction 06](images/BuildGuide-construction-06.jpg)


## QMK Firmware
### Firmware binary of default layout (no VIA support)
[girasole40_default.uf2](girasole40_default.uf2)