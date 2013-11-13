QT += core gui opengl

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    glwidget.cpp \
    parallelepiped.cpp \
    gamelogic.cpp

FORMS += \
    mainwindow.ui

HEADERS += \
    mainwindow.h \
    glwidget.h \
    parallelepiped.h \
    point3d.h \
    gamelogic.h

LIBS += -lglut -lGL -lGLU
