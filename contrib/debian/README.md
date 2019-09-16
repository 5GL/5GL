
Debian
====================
This directory contains files used to package 5gld/5gl-qt
for Debian-based Linux systems. If you compile 5gld/5gl-qt yourself, there are some useful files here.

## 5gl: URI support ##


5gl-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install 5gl-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your 5gl-qt binary to `/usr/bin`
and the `../../share/pixmaps/5gl128.png` to `/usr/share/pixmaps`

5gl-qt.protocol (KDE)

