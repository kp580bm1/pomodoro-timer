TARGET = pomodoro

OBJECTS_DIR = tmp
MOC_DIR = tmp
RCC_DIR = tmp
UI_DIR = tmp

unix:LIBS += -lSDL -lSDL_mixer
HEADERS = mainwindow.h
SOURCES = main.cpp mainwindow.cpp
