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
	//按键使能
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

void Scaling::on_pushButton_catch_image_clicked() //拍照
{		

	m_algo.CatchImage();
	ui.pushButton_scaling->setEnabled(true);
	ui.pushButton_measure->setEnabled(true);

}
void Scaling::on_pushButton_input_image_clicked() //输入图片
{
	m_algo.InputImage();
	ui.pushButton_scaling->setEnabled(true);
	ui.pushButton_measure->setEnabled(true);
}
void Scaling::on_pushButton_measure_clicked()  //测量
{   
//根据check_box 进行判断是垂直还是水平方向上的测量
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

// 	QMessageBox::information(this, QStringLiteral("提示"), QStringLiteral("请点击图片，右键确定矩形框位置以及直线位置"));
// 	m_algo.MeasureHeight();
// 	//m_algo.MeasureWidth(); 
// 	ui.doubleSpinBox_test->setSuffix("mm");          //设置输出样式
//     ui.doubleSpinBox_test->setValue(m_algo.MeasureWidth());//调用测量算法得到测量值

}
void Scaling::on_pushButton_scaling_clicked()  
{	
	ui.doubleSpinBox_real->setSuffix("mm");
    QString line_value = ui.doubleSpinBox_real->text();//获取输入值
	double test_value = line_value.toDouble();			//数据转换
    //实际与测量值之间的比值
	ui.label_scaling->setText(QStringLiteral("转换比例：  %0").arg(test_value / (ui.doubleSpinBox_test->text()).toDouble()));
	return;

}