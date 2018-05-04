
#ifndef ALGORITHM_H
#define ALGORITHM_H
#include "HalconCpp.h"
#include "HDevThread.h"
#include <QImage.h>
#include <QMessageBox>
#include <qfiledialog.h>


using namespace HalconCpp;
class Algorithm
{
public:
	Algorithm();
	~Algorithm();

public:
	void	 CatchImage();							//ץȡͼƬ
	void	 InputImage();							//����ͼƬ
	double   MeasureWidth();			 			//�������
	void	 MeasureHeight();						//��������
	void     ShowImage(QImage *image)  ;		    //��ʾͼƬ
	bool     IsEmpty();							    //�ж��Ƿ�Ϊ��
	inline double  ReturnResult(){ return Algo_num; };    //���ز������

// 	void     disp_message(HTuple hv_WindowHandle, HTuple hv_String, HTuple hv_CoordSystem,
// 		HTuple hv_Row, HTuple hv_Column, HTuple hv_Color, HTuple hv_Box);
// 
// 	void     dev_open_window_fit_image(HObject ho_Image, HTuple hv_Row, HTuple hv_Column,
// 		HTuple hv_WidthLimit, HTuple hv_HeightLimit, HTuple *hv_WindowHandle);

private:
	HObject  ho_Image, ho_Rectangle, ho_Cross;
	// Local control variables
	HTuple  hv_WindowHandle, hv_AcqHandle, hv_t, hv_Row5;
	HTuple  hv_Column6, hv_Phi1, hv_Length1, hv_Length2, hv_MsrHandle_Measure_04_0;
	HTuple  hv_Row_Measure_04_0, hv_Column_Measure_04_0, hv_Amplitude_Measure_04_0;
	HTuple  hv_Distance_Measure_04_0, hv_Row7, hv_Column8, hv_Row9;
	HTuple  hv_Column10, hv_Distance, hv_tuple;
	HTuple  hv_Width, hv_Height;

private:
	QPixmap Algo_image;							//����ͼƬ
	QString Algo_strPath;						//ͼƬ·��
	double  Algo_num;						    //������ֵ     

};


#endif // ALGORITHM_H