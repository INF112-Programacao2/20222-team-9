all: cmakeGenerateMakeFile cmakeBuild

config: installDependences

build: cmakeGenerateMakeFile cmakeBuild

installDependences:
	sudo apt-get install qtcreator build-essential qt5-default qtbase5-dev	

cmakeGenerateMakeFile:
	qmake -o build/Makefile vinil_qt/vinil_qt.pro -Wnone

cmakeBuild:
	cd build && make

run: 
	cd build && ./20222-team-9

