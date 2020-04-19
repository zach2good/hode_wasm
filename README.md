 # hode_wasm [![Build Status](https://travis-ci.com/zach2good/hode_wasm.svg?branch=master)](https://travis-ci.com/zach2good/hode_wasm)

## About

**hode_wasm**

hode_wasm is a small hobby project to get hode running in the browser, using Emscripten.

**hode**

hode is a reimplementation of the engine used by the game 'Heart of Darkness'
developed by Amazing Studio.

## Progress

![alt text](img/img1.png)

## Datafiles

The original datafiles from the Windows releases (Demo or CD) are required.

- hod.paf (hod_demo.paf, hod_demo2.paf)
- setup.dat
- *_hod.lvl
- *_hod.sss
- *_hod.mst

See also the 'RELEASES.yaml' file for a list of game versions this program
has been tested with.

## Running:

By default the engine will
try to load the files from the current directory
and start the game from the first level.

These defaults can be changed using command line switches :

    Usage: hode [OPTIONS]...
    --datapath=PATH   Path to data files (default '.')
    --savepath=PATH   Path to save files (default '.')
    --level=NUM       Start at level NUM
    --checkpoint=NUM  Start at checkpoint NUM

Display and engine settings can be configured in the 'hode.ini' file.

Game progress is saved in 'setup.cfg', similar to the original engine.

## Status

Settings submenu is not implemented.

PSX datafiles can be used, but menu and videos are missing.

## Credits

All the team at Amazing Studio for possibly the best cinematic platformer ever
developed.

The originall author of this project: Gregory Montoir (http://cyxdown.free.fr/hode/)

Forked and then split from usineur's port (https://github.com/usineur/hode)

## URLs:

[1] https://www.mobygames.com/game/heart-of-darkness
[2] http://heartofdarkness.ca/
