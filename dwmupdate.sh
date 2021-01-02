#!/bin/sh

[ ! -x "$(command -v pacman)" ] && echo "Unable to find pacman. This script is meant for Arch-based systems." && exit 0

/usr/bin/echo -en "Update script for dwm-geir\n\n"

INSTALLERT=$(pacman -Qs dwm-geir|head -1|awk '{print $2}')

[ -z $INSTALLERT ] && echo "dwm-geir is not installed" || echo "Installed version: $INSTALLERT"
wget -q https://raw.githubusercontent.com/geirda/Arch/master/suckless/dwm/README.md -O /tmp/dwm-geir
NYESTE=$(grep pacman /tmp/dwm-geir | cut -f5- -d " "| cut -f3-4 -d "-")

[ "$NYESTE" = "$INSTALLERT" ] && echo "You have the latest version" && exit 0

echo -n "Latest version is $NYESTE. Do you want to install it? [y/N] "
read SVAR

case $SVAR in
	j|J|y|Y)
		wget -q https://github.com/geirda/dwm-geir/raw/atle/dwm-geir-${NYESTE}-x86_64.pkg.tar.zst -O /tmp/dwmgeir.pkg.tar.zst
		sudo pacman --noconfirm -U /tmp/dwmgeir.pkg.tar.zst
		;;
esac
