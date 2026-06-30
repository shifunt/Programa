/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *btnBorrar;
    QLabel *label_3;
    QPushButton *btnVerNovedades;
    QCheckBox *chkPropietario;
    QLabel *label;
    QLineEdit *txtVisita;
    QPushButton *btnSalida;
    QPushButton *btnRegistrar;
    QLineEdit *txtApellido;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *txtNombre;
    QPushButton *btnBuscar;
    QLabel *label_4;
    QTableWidget *tablaDatos;
    QTextEdit *txtNovedad;
    QPushButton *btnGuardarNovedad;
    QLineEdit *txtPatente;
    QPushButton *btnBorrarNovedad;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnBorrar = new QPushButton(centralwidget);
        btnBorrar->setObjectName(QString::fromUtf8("btnBorrar"));

        gridLayout->addWidget(btnBorrar, 5, 3, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        btnVerNovedades = new QPushButton(centralwidget);
        btnVerNovedades->setObjectName(QString::fromUtf8("btnVerNovedades"));

        gridLayout->addWidget(btnVerNovedades, 8, 3, 1, 1);

        chkPropietario = new QCheckBox(centralwidget);
        chkPropietario->setObjectName(QString::fromUtf8("chkPropietario"));

        gridLayout->addWidget(chkPropietario, 0, 3, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        txtVisita = new QLineEdit(centralwidget);
        txtVisita->setObjectName(QString::fromUtf8("txtVisita"));

        gridLayout->addWidget(txtVisita, 3, 1, 1, 2);

        btnSalida = new QPushButton(centralwidget);
        btnSalida->setObjectName(QString::fromUtf8("btnSalida"));

        gridLayout->addWidget(btnSalida, 5, 2, 1, 1);

        btnRegistrar = new QPushButton(centralwidget);
        btnRegistrar->setObjectName(QString::fromUtf8("btnRegistrar"));

        gridLayout->addWidget(btnRegistrar, 5, 1, 1, 1);

        txtApellido = new QLineEdit(centralwidget);
        txtApellido->setObjectName(QString::fromUtf8("txtApellido"));

        gridLayout->addWidget(txtApellido, 1, 1, 1, 2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        txtNombre = new QLineEdit(centralwidget);
        txtNombre->setObjectName(QString::fromUtf8("txtNombre"));

        gridLayout->addWidget(txtNombre, 0, 1, 1, 2);

        btnBuscar = new QPushButton(centralwidget);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));

        gridLayout->addWidget(btnBuscar, 2, 3, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        tablaDatos = new QTableWidget(centralwidget);
        if (tablaDatos->columnCount() < 7)
            tablaDatos->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaDatos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaDatos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaDatos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaDatos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaDatos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablaDatos->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablaDatos->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tablaDatos->setObjectName(QString::fromUtf8("tablaDatos"));
        tablaDatos->setMinimumSize(QSize(200, 0));
        tablaDatos->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tablaDatos, 14, 0, 1, 4);

        txtNovedad = new QTextEdit(centralwidget);
        txtNovedad->setObjectName(QString::fromUtf8("txtNovedad"));

        gridLayout->addWidget(txtNovedad, 8, 1, 1, 1);

        btnGuardarNovedad = new QPushButton(centralwidget);
        btnGuardarNovedad->setObjectName(QString::fromUtf8("btnGuardarNovedad"));

        gridLayout->addWidget(btnGuardarNovedad, 8, 2, 1, 1);

        txtPatente = new QLineEdit(centralwidget);
        txtPatente->setObjectName(QString::fromUtf8("txtPatente"));

        gridLayout->addWidget(txtPatente, 2, 1, 1, 2);

        btnBorrarNovedad = new QPushButton(centralwidget);
        btnBorrarNovedad->setObjectName(QString::fromUtf8("btnBorrarNovedad"));

        gridLayout->addWidget(btnBorrarNovedad, 9, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnBorrar->setText(QCoreApplication::translate("MainWindow", "ELIMINAR REGISTRO", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "visita a:", nullptr));
        btnVerNovedades->setText(QCoreApplication::translate("MainWindow", "VER NOVEDADES", nullptr));
        chkPropietario->setText(QCoreApplication::translate("MainWindow", "Es Propietario?", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Apellido", nullptr));
        btnSalida->setText(QCoreApplication::translate("MainWindow", "REGISTRAR SALIDA ", nullptr));
        btnRegistrar->setText(QCoreApplication::translate("MainWindow", "REGISTRAR INGRESO", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Patente", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Registro de Ingresos", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "BUSCAR", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaDatos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "HORA:", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaDatos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaDatos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Apellido", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaDatos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Patente", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaDatos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Visita", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablaDatos->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Tipo", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tablaDatos->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "SALIDA:", nullptr));
        btnGuardarNovedad->setText(QCoreApplication::translate("MainWindow", "GUARDAR NOVEDAD", nullptr));
        btnBorrarNovedad->setText(QCoreApplication::translate("MainWindow", "BORRAR NOVEDADES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
