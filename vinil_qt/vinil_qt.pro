QT       += core gui sql
QTPLUGIN += QSQLMYSQL

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cart.cpp \
    client.cpp \
    dao_cart.cpp \
    dao_client.cpp \
    dao_music.cpp \
    dao_purchase.cpp \
    dao_vinyl.cpp \
    data_source.cpp \
    inserirusuario.cpp \
    main.cpp \
    mainwindow.cpp \
    music.cpp \
    purchase.cpp \
    teste_login.cpp \
    testeuserdao.cpp \
    userteste.cpp \
    vinyl.cpp
    userteste.cpp

HEADERS += \
    cart.h \
    client.h \
    dao_cart.h \
    dao_client.h \
    dao_music.h \
    dao_purchase.h \
    dao_vinyl.h \
    data_source.h \
    inserirusuario.h \
    mainwindow.h \
    music.h \
    purchase.h \
    teste_login.h \
    testeuserdao.h \
    userteste.h \
    vinyl.h
    userteste.h
    login_teste.h

FORMS += \
    inserirusuario.ui \
    mainwindow.ui \
    teste_login.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
