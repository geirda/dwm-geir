# dwm-geir 6.2

Patches included:

* attachbelow
* autostart
* centeredmaster
* gaplessgrid
* layoutmenu
* pertag
* resetnmaster
* rotatestack
* ru_gaps
* status2d
* statuspadding
* swallow
* switchtotag
* titlecolor

This version of dwm uses the following two fonts:

* hack
* roboto mono nerd font

Hack font is usually found in your distro's repo. For Debian-based systems:

	$ sudo apt install fonts-hack

For Arch-based systems:

	$ pacman -S ttf-hack

RobotoMono Nerd Font can be downloaded from https://www.nerdfonts.com/font-downloads

To get a layouts menu when rightclicking the layouts-icon, please install xmenu: https://github.com/phillbush/xmenu

## Installation

Clone this repo and compile from source:

	$ git clone https://github.com/geirda/dwm-geir.git
	$ cd dwm-geir
	$ sudo make clean install

## For Arch users:

Download the file PKGBUILD, create and install the package:

	$ wget https://raw.githubusercontent.com/geirda/dwm-geir/main/PKGBUILD
	$ makepkg -i

Precompiled packages for Arch: https://github.com/geirda/Arch/tree/master/suckless/dwm/


![suckless](https://raw.githubusercontent.com/geirda/Arch/master/suckless/suckless.png)
