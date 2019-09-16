#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/5gl.png
ICON_DST=../../src/qt/res/icons/5gl.ico
convert ${ICON_SRC} -resize 16x16 5gl-16.png
convert ${ICON_SRC} -resize 32x32 5gl-32.png
convert ${ICON_SRC} -resize 48x48 5gl-48.png
convert 5gl-16.png 5gl-32.png 5gl-48.png ${ICON_DST}

