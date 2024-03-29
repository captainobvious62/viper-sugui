#ifndef _SIMULPARAMS_H_
#define _SIMULPARAMS_H_

#include <QProcess>
#include <QDialog>

#include "ui_simulparams.h"

class SimulationModel;

class SimulParams : public QDialog, public Ui::SimulParams
{
    Q_OBJECT

public:
    SimulParams(QWidget *parent = 0);
	void getParams(SimulationModel &vm);

};

#endif /* _SIMULPARAMS_H_ */

