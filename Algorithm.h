
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
	void	 CatchImage();							//抓取图片
	void	 InputImage();							//导入图片
	double   MeasureWidth();			 			//测量宽度
	void	 MeasureHeight();						//测量长度
	void     ShowImage(QImage *image)  ;		    //显示图片
	bool     IsEmpty();							    //判断是否为空
	inline double  ReturnResult(){ return Algo_num; };    //返回测量结果

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
	QPixmap Algo_image;							//导入图片
	QString Algo_strPath;						//图片路径
	double  Algo_num;						    //测量数值     

};


#endif // ALGORITHM_H