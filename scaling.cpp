#include "scaling.h"
#include "QSplashScreen"
#include "Algorithm.h"
#include <QDoubleSpinBox> 
#include "QDebug"
#include<iostream>



Scaling::Scaling(QWidget *parent)
	: QWidget(parent)
{
	
	ui.setupUi(this);
	
	QSplashScreen screen(QPixmap("../res/logo.png"));
	screen.show();
	HWND hWnd = (HWND)ui.label_image->winId();
	int labelWidth = ui.label_image->width();
	int labelHeight = ui.label_image->height();
// 	OpenWindow(0, 0, labelWidth, labelHeight, (Hlong)hWnd, "", "", &hv_WindowHandle);
// 	OpenFramegrabber("GenICamTL", 0, 0, 0, 0, 0, 0, "progressive", -1, "default", -1,
// 		"false", "default", "MER-130-30UM-L(RH1626006017)", 0, -1, &hv_AcqHandle);
	screen.finish(parent);
	//����ʹ��
	ui.pushButton_scaling->setEnabled(false);
	ui.pushButton_measure->setEnabled(false);



	QObject::connect(ui.doubleSpinBox_real, static_cast<void(QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged),
	[=](int value)
	{
		qDebug() << "Value : " << value;
		qDebug() << "Text : " << ui.doubleSpinBox_real->text();
	});



	QObject::connect(ui.pushButton_catch_image, SIGNAL(clicked()), this, SLOT(pushButton_catch_image()));
	QObject::connect(ui.pushButton_input_image, SIGNAL(clicked()), this, SLOT(pushButton_input_image()));
	QObject::connect(ui.pushButton_measure, SIGNAL(clicked()), this, SLOT(pushButton_measure()));
	QObject::connect(ui.pushButton_scaling, SIGNAL(clicked()), this, SLOT(pushButton_scaling()));

}

Scaling::~Scaling()
{

}

void Scaling::on_pushButton_catch_image_clicked() //����
{		

	m_algo.CatchImage();
	ui.pushButton_scaling->setEnabled(true);
	ui.pushButton_measure->setEnabled(true);

}
void Scaling::on_pushButton_input_image_clicked() //����ͼƬ
{
	m_algo.InputImage();
	ui.pushButton_scaling->setEnabled(true);
	ui.pushButton_measure->setEnabled(true);
}
void Scaling::on_pushButton_measure_clicked()  //����
{   
//����check_box �����ж��Ǵ�ֱ����ˮƽ�����ϵĲ���
	if (ui.checkBox->isChecked())
	{   
		using namespace std;
		cout <<"checked"<< endl;
		/*m_algo.MeasureHeight();*/
	}
	else
	{
		using namespace std;
		cout << "unchecked" << endl;
		/*m_algo.MeasureWidth();*/
	}

// 	QMessageBox::information(this, QStringLiteral("��ʾ"), QStringLiteral("����ͼƬ���Ҽ�ȷ�����ο�λ���Լ�ֱ��λ��"));
// 	m_algo.MeasureHeight();
// 	//m_algo.MeasureWidth(); 
// 	ui.doubleSpinBox_test->setSuffix("mm");          //���������ʽ
//     ui.doubleSpinBox_test->setValue(m_algo.MeasureWidth());//���ò����㷨�õ�����ֵ

}
void Scaling::on_pushButton_scaling_clicked()  
{	
	ui.doubleSpinBox_real->setSuffix("mm");
    QString line_value = ui.doubleSpinBox_real->text();//��ȡ����ֵ
	double test_value = line_value.toDouble();			//����ת��
    //ʵ�������ֵ֮��ı�ֵ
	ui.label_scaling->setText(QStringLiteral("ת��������  %0").arg(test_value / (ui.doubleSpinBox_test->text()).toDouble()));
	return;

}