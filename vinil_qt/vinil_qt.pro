QT       += core gui sql network
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
    main.cpp \
    mainwindow.cpp \
    music.cpp \
    purchase.cpp \
    screen_cart.cpp \
    screen_completed_purchase.cpp \
    screen_disc.cpp \
    screen_home.cpp \
    screen_login.cpp \
    screen_new_account.cpp \
    screen_profile.cpp \
    testeuserdao.cpp \
    userteste.cpp \
    vinyl.cpp \
    common_client.cpp\
    vip_client.cpp\
    vip_purchase.cpp

HEADERS += \
    cart.h \
    client.h \
    dao_cart.h \
    dao_client.h \
    dao_music.h \
    dao_purchase.h \
    dao_vinyl.h \
    data_source.h \
    mainwindow.h \
    music.h \
    purchase.h \
    screen_cart.h \
    screen_completed_purchase.h \
    screen_disc.h \
    screen_home.h \
    screen_login.h \
    screen_new_account.h \
    screen_profile.h \
    testeuserdao.h \
    userteste.h \
    vinyl.h \
    common_client.h\
    vip_client.h\
    vip_purchase.h\
    connection_exception.h


FORMS += \
    mainwindow.ui \
    screen_cart.ui \
    screen_completed_purchase.ui \
    screen_disc.ui \
    screen_home.ui \
    screen_login.ui \
    screen_new_account.ui \
    screen_profile.ui
 RESOURCES += \
    res.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
