
Debian
====================
This directory contains files used to package posanted/posante-qt
for Debian-based Linux systems. If you compile posanted/posante-qt yourself, there are some useful files here.

## posante: URI support ##


posante-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install posante-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your posante-qt binary to `/usr/bin`
and the `../../share/pixmaps/posante128.png` to `/usr/share/pixmaps`

posante-qt.protocol (KDE)

