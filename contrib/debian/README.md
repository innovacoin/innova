
Debian
====================
This directory contains files used to package innovad/innova-qt
for Debian-based Linux systems. If you compile innovad/innova-qt yourself, there are some useful files here.

## innova: URI support ##


innova-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install innova-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your innova-qt binary to `/usr/bin`
and the `../../share/pixmaps/innova128.png` to `/usr/share/pixmaps`

innova-qt.protocol (KDE)

