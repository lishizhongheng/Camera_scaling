#ifndef SCALING_H
#define SCALING_H

#include <QtWidgets/QWidget>
#include "ui_scaling.h"
#include "halconCpp.h"
#include <Algorithm.h>

using namespace HalconCpp;

class Scaling : public QWidget
{
	Q_OBJECT
private:
	Ui::ScalingClass ui;

public:
	Scaling(QWidget *parent = 0);
	~Scaling();

public slots:
	void on_pushButton_catch_image_clicked();
	void on_pushButton_input_image_clicked();
	void on_pushButton_measure_clicked();
	void on_pushButton_scaling_clicked();

private:
	// Local iconic variables
	HObject  ho_Image, ho_Rectangle, ho_Cross;

	// Local control variables
	HTuple  hv_WindowHandle, hv_AcqHandle, hv_Width;
	HTuple  hv_Height, hv_t, hv_Row5, hv_Column6, hv_Phi1, hv_Length1;
	HTuple  hv_Length2, hv_MsrHandle_Measure_04_0, hv_Row_Measure_04_0;
	HTuple  hv_Column_Measure_04_0, hv_Amplitude_Measure_04_0;
	HTuple  hv_Distance_Measure_04_0, hv_Row7, hv_Column8, hv_Row9;
	HTuple  hv_Column10, hv_Distance, hv_tuple;



private:
    Algorithm m_algo;

};

#endif // SCALING_H
