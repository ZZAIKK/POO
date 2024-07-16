QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    sources/cabcliente.cpp \
    sources/clienteDAO.cpp \
    sources/empleados.cpp \
    sources/empleadosDAO.cpp \
    sources/logic_cliente.cpp \
    sources/logic_empleados.cpp \
    sources/logic_product.cpp \
    sources/logic_provedor.cpp \
    sources/logic_user.cpp \
    sources/product.cpp \
    sources/productDAO.cpp \
    sources/provedorDAO.cpp \
    sources/provedores.cpp \
    sources/user.cpp \
    sources/userDAO.cpp \
    view/addprovedores.cpp \
    view/consultproducts.cpp \
    view/grafi_empleados.cpp \
    view/graficlientes.cpp \
    view/home.cpp \
    view/registerproduct.cpp \
    view/registrarventas.cpp \
    view/registrouser.cpp \
    widget.cpp

HEADERS += \
    headers/cabcliente.h \
    headers/clienteDAO.h \
    headers/empleados.h \
    headers/empleadosDAO.h \
    headers/logic_cliente.h \
    headers/logic_empleados.h \
    headers/logic_product.h \
    headers/logic_provedor.h \
    headers/logic_user.h \
    headers/product.h \
    headers/productDAO.h \
    headers/provedorDAO.h \
    headers/provedores.h \
    headers/user.h \
    headers/userDAO.h \
    view/addprovedores.h \
    view/consultproducts.h \
    view/grafi_empleados.h \
    view/graficlientes.h \
    view/home.h \
    view/registerproduct.h \
    view/registrarventas.h \
    view/registrouser.h \
    widget.h

FORMS += \
    view/addprovedores.ui \
    view/consultproducts.ui \
    view/grafi_empleados.ui \
    view/graficlientes.ui \
    view/home.ui \
    view/registerproduct.ui \
    view/registrarventas.ui \
    view/registrouser.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
