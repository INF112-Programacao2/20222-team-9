QT       += core gui sql
QTPLUGIN += QSQLMYSQL

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cliente.cpp \
    compra.cpp \
    dao_cliente.cpp \
    dao_connection_factory.cpp \
    inserirusuario.cpp \
    main.cpp \
    mainwindow.cpp \
    teste_login.cpp \
    testeuserdao.cpp \
    userteste.cpp
    userteste.cpp

HEADERS += \
    cliente.h \
    compra.h \
    dao_cliente.h \
    dao_connection_factory.h \
    inserirusuario.h \
    mainwindow.h \
    teste_login.h \
    testeuserdao.h \
    userteste.h
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
