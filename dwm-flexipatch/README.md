# dwm-geir 6.4 (based on dwm-flexipatch)

Patches included:

* attachbelow
* autostart
* centeredmaster
* centerpatch
* gaplessgrid
* layoutmenu
* noborder
* no_transparent_borders
* pertag
* rotatestack
* status2d
* statuspadding
* swallow
* switchtag
* vanity_gaps

This version of dwm uses the following two fonts:

* hack
* roboto mono nerd font

Hack font is usually found in your distro's repo. For Debian-based systems:

	$ sudo apt install fonts-hack

RobotoMono Nerd Font can be downloaded from https://www.nerdfonts.com/font-downloads

For Arch-based systems:

	$ sudo pacman -S ttf-hack ttf-roboto-mono-nerd

To get a layouts menu when rightclicking the layouts-icon, please install xmenu: https://github.com/phillbush/xmenu

## Installation

Clone dwm-flexipatch:

	$ git clone https://github.com/bakkeby/dwm-flexipatch.git

Download config.h, config.mk, dwm.1 and patches.h from here and put them in the dwm-flexipatch folder

	$ sudo make clean install


![suckless](https://raw.githubusercontent.com/geirda/Arch/master/suckless/suckless.png)
