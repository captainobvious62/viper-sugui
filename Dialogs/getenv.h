#ifndef _GETENV_H_
#define _GETENV_H_

#include <QDialog>

#include "ui_getenv.h"

class GetEnv : public QDialog, public Ui::GetEnv
{
    Q_OBJECT

public:
    GetEnv(QWidget *parent = 0);
	QString getEnvironment();
	// void getParams(VelocityModel &vm);

private slots:
    void on_browseButton_clicked();

private:
    QString environment;

};

#endif /* _GETENV_H_ */