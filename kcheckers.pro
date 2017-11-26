TEMPLATE = app

INCLUDEPATH += /usr/local/include/
CONFIG  += qt
QT += gui widgets

HEADERS	= pdn.h \
	    checkers.h echeckers.h rcheckers.h \
	    field.h toplevel.h view.h history.h board.h \
	    newgamedlg.h \
	    common.h \
	    player.h humanplayer.h computerplayer.h
	   

SOURCES	= pdn.cc \
	    checkers.cc echeckers.cc rcheckers.cc \
	    field.cc toplevel.cc view.cc history.cc board.cc \
	    main.cc \
	    newgamedlg.cc \
	    humanplayer.cc computerplayer.cc

RESOURCES = kcheckers.qrc


TARGET		= kcheckers
PREFIX		= /usr

TRANSLATIONS	= i18n/kcheckers_de.ts i18n/kcheckers_fr.ts i18n/kcheckers_ru.ts

target.path	= $$PREFIX/games
INSTALLS	+= target


#
# This hack is needed for i18n support.
#
share.path	+= $$PREFIX/share/kcheckers
share.files	+= kcheckers.pdn themes i18n/*
INSTALLS	+= share

