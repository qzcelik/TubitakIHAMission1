 

#include "stdafx.h"
#include <opencv2/opencv.hpp>
 

 
using namespace cv;
using namespace std;

int renk1[16];
int renk2[16];
int renk3[16];
int sayacDeger[16];
int sonucDizi[16];

int xbaslnagic, yBaslangic, kenar, ustX, ustY, artisMiktar;
int baslangicDiziX[1], baslangicDiziY[1];
void isaretle(Mat oku)
{
	for (int i = 0; i <16; i++)//dizilerin içini sýfýr ile dolduruyoruz
	{
		renk1[i] = 3;
		renk2[i] = 3;
		renk3[i] = 3;
		
	}

	int sayac = 0, deger=0, x = 0, y = 0,sutun,satir,xBas=0,xBitis=50,yBas=0,yBitis=50,diziIndex=0;
	
	//for (sutun = 0; sutun < 4; sutun++)//sütun
	//{

	//	for (satir = 0; satir < 4; satir++)//satýr
	//	{
	//		
	//		diziIndex++;
	//		for (y = yBas; y < yBitis; y++)
	//		{
	//			for (x = xBas; x < xBitis; x++)
	//			{
	//				deger = oku.at<uchar>(y, x);

	//				if (deger > 240)
	//				{
	//					sayac++;
	//				} 
	//			}
	//		}
	//		printf("sayacInfdeger %d ",diziIndex);
	//		printf("sayac %d \n", sayac);
	//		sayacDeger[diziIndex] = sayac;
	//		
	//		xBas += 50;
	//		xBitis +=50;
	//		sayac = 0;
	//	}
	//	printf("xbas --> %d\n", xBas);
	//	printf("xbitis --> %d\n", xBitis);
	//	xBas = 0;
	//	xBitis = 0;

	//	yBas += 50;
	//	yBitis += 50;
	//}

	//printf("xbas --> %d\n",xBas);
	//printf("xbitis --> %d\n", xBitis);

	//printf("ybas --> %d\n", yBas);
	//printf("ybitis --> %d\n", yBitis);
	//printf("\n");

	
for (y = ustY; y < ustY+artisMiktar; y++)
{
	for (x = ustX; x < ustX +artisMiktar; x++)
	{
		deger = oku.at<uchar>(y, x);

		// printf("deger %d", deger);

		if (deger > 240)
		{
			
			sayac++;
		}

	}
}
sayacDeger[0] = sayac;//sayac deðerlerinin tutuyoruz daha sonra karþýlaþturma yapacaðýz
sayac = 0;


for (y = ustY; y < ustY + artisMiktar; y++)
{
	for (x = ustX+artisMiktar; x <ustX+(artisMiktar*2); x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}
sayacDeger[1] = sayac;
sayac = 0;

for (y = ustY; y < ustY + artisMiktar; y++)
{
	for (x = ustX + (artisMiktar * 2); x <ustX + (artisMiktar * 3); x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}

sayacDeger[2] = sayac;
sayac = 0;

for (y = ustY; y < ustY + artisMiktar; y++)
{
	for (x = ustX + (artisMiktar * 3); x <ustX + (artisMiktar * 4); x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}

sayacDeger[3] = sayac;
sayac = 0;


for (y = ustY+ artisMiktar; y < ustY + (artisMiktar*2); y++)
{
	for (x = ustX; x < ustX + artisMiktar; x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}

sayacDeger[4] = sayac;
sayac = 0;


for (y = ustY + artisMiktar; y < ustY + (artisMiktar * 2); y++)
{
	for (x = ustX +artisMiktar; x < ustX + (artisMiktar*2); x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}

sayacDeger[5] = sayac;
sayac = 0;


for (y = ustY + artisMiktar; y < ustY + (artisMiktar * 2); y++)
{
	for (x = ustX + (artisMiktar*2); x < ustX + (artisMiktar * 3); x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}
sayacDeger[6] = sayac;
sayac = 0;


for (y = ustY + artisMiktar; y < ustY + (artisMiktar * 2); y++)
{
	for (x = ustX + (artisMiktar * 3); x < ustX + (artisMiktar * 4); x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}
sayacDeger[7] = sayac;
sayac = 0;


//-----------------*****************************************--------------------------------------



for (y = ustY + (artisMiktar*2); y < ustY + (artisMiktar * 3); y++)
{
	for (x = ustX; x < ustX + artisMiktar; x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}
sayacDeger[8] = sayac;
sayac = 0;


for (y = ustY + (artisMiktar * 2); y < ustY + (artisMiktar * 3); y++)
{
	for (x = ustX + artisMiktar; x < ustX + (artisMiktar*2); x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}
sayacDeger[9] = sayac;
sayac = 0;


for (y = ustY + (artisMiktar * 2); y < ustY + (artisMiktar * 3); y++)
{
	for (x = ustX + (artisMiktar*2); x < ustX + (artisMiktar * 3); x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}

sayacDeger[10] = sayac;
sayac = 0;


for (y = ustY + (artisMiktar * 2); y < ustY + (artisMiktar * 3); y++)
{
	for (x = ustX + (artisMiktar * 3); x < ustX + (artisMiktar * 4); x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}

sayacDeger[11] = sayac;
sayac = 0;


for (y = ustY + (artisMiktar * 3); y < ustY + (artisMiktar * 4); y++)
{
	for (x = ustX; x < ustX + artisMiktar; x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}

sayacDeger[12] = sayac;
sayac = 0;


for (y = ustY + (artisMiktar * 3); y < ustY + (artisMiktar * 4); y++)
{
	for (x = ustX + artisMiktar; x < ustX + (artisMiktar*2); x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}

sayacDeger[13] = sayac;
sayac = 0;


for (y = ustY + (artisMiktar * 3); y < ustY + (artisMiktar * 4); y++)
{
	for (x = ustX + (artisMiktar * 2); x < ustX + (artisMiktar * 3); x++)
	{
		deger = oku.at<uchar>(y, x);

		//printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}

sayacDeger[14] = sayac;
sayac = 0;


for (y = ustY + (artisMiktar * 3); y < ustY + (artisMiktar * 4); y++)
{
	for (x = ustX + (artisMiktar * 3); x < ustX + (artisMiktar * 4); x++)
	{
		deger = oku.at<uchar>(y, x);

	 //printf("%d \n", deger);

		if (deger > 240)
		{
			sayac++;
		}

	}
}

sayacDeger[15] = sayac;
sayac = 0;

}

void dosyaYaz(int kontrol)
{
	 
		/*printf("sonuc==%d", sayacDeger[0]);
		printf("sonuc2==%d", sayacDeger[1]);
		printf("sonuc3==%d", sayacDeger[2]);
		printf("sonuc4==%d", sayacDeger[3]);
		printf("\n");
		printf("sonuc5==%d", sayacDeger[4]);
		printf("sonuc6==%d", sayacDeger[5]);
		printf("sonuc7==%d", sayacDeger[6]);
		printf("sonuc8==%d", sayacDeger[7]);
		printf("\n");
		printf("sonuc9==%d", sayacDeger[8]);
		printf("sonuc10==%d", sayacDeger[9]);
		printf("sonuc11==%d", sayacDeger[10]);
		printf("sonuc12==%d", sayacDeger[11]);
		printf("\n");
		printf("sonuc13==%d", sayacDeger[12]);
		printf("sonuc14==%d", sayacDeger[13]);
		printf("sonuc15==%d", sayacDeger[14]);
		printf("sonuc16==%d", sayacDeger[15]); */
		
	for (int i = 0; i < 16; i++)
		{
			if (sayacDeger[i] > 100)
			{
				if (kontrol == 1)
				{
					sonucDizi[i] = 0;
				}
				if (kontrol == 2)
				{
					sonucDizi[i] = 1;
				}
				if (kontrol == 3)
				{
					sonucDizi[i] = 2;
				}
			}
		}

	
 
}

int r1Alan=0, r2Alan=0, r3Alan=0;
void r1(Mat deger,int kontrol)//mavi
{
	//103-58-0  161-255-255
	Mat donusen;
	double alan=0;
	inRange(deger, Scalar(100, 164, 75), Scalar(117, 199, 255), donusen);

    if (kontrol == 0)
	{
		Moments moment = moments(donusen);
		alan = moment.m00;
        printf("mavi %f\n", alan);
		imshow("mavi",donusen);

		if (abs(alan) > 5000000)
		{
			r1Alan = 1;
		}
		else
		{
			r1Alan = 0;
		}
	}



	if (kontrol == 1)
	{
		//dilate(donusen, donusen, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)));
		imshow("mavi", donusen);
		imwrite("c:/users/acer/desktop/droneGorevDeneme2/maviTrash.jpg", donusen);
	}

}

void r2(Mat deger,int kontrol)//yeþil
{
	//30-79-0   107-255-255
	Mat donusen;
	double alan=0;
	inRange(deger, Scalar(23, 197, 166), Scalar(23, 255, 255), donusen);
  
	if (kontrol == 0)
	{
	
		Moments moment = moments(donusen);
		alan = moment.m00;

		printf("yesil %f\n", alan);
		imshow("yesil", donusen);

		if (alan > 5000000)
		{
			r2Alan = 1;
		}
		else
		{
			r2Alan = 0;
		}

	}
 
	if (kontrol == 1)
	{
		//dilate(donusen, donusen, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)));
		imshow("yesil", donusen);
		imwrite("c:/users/acer/desktop/droneGorevDeneme2/yesilTrash.jpg", donusen);
	}

}

void r3(Mat deger, int kontrol)//kýrmýzý
{
	//0-206-0  0-255-255
	Mat donusen;
	double alan=0;
	inRange(deger, Scalar(0, 164, 75), Scalar(16, 199, 255), donusen);

	if (kontrol == 0)
	{
		Moments moment = moments(donusen);
		alan = moment.m00;
		 printf("krýmýzý %f\n", alan);
		imshow("kýrmýzý", donusen);
		if (alan> 5000000)
		{
			r3Alan = 1;
		}
		else
		{
			r3Alan = 0;
		}

    }
 	if (kontrol == 1)
	{
		 dilate(donusen, donusen, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)));
		 imshow("kýrmýzý",donusen);
		imwrite("c:/users/acer/desktop/droneGorevDeneme2/kirmiziTrash.jpg", donusen);
	}

}


void boya()
{
	int enbAlan=0;
	 
	Mat toplam1, toplam2,orjinal;
	Mat rr1 = imread("c:/users/acer/desktop/droneGorevDeneme2/maviTrash.jpg");
	Mat rr2 = imread("c:/users/acer/desktop/droneGorevDeneme2/yesilTrash.jpg");
	Mat rr3 = imread("c:/users/acer/desktop/droneGorevDeneme2/kirmiziTrash.jpg");

	addWeighted(rr1, 1.0, rr2, 1.0, 0.0, toplam1);
	addWeighted(toplam1, 1.0, rr3, 1.0, 0.0, toplam2);
	orjinal = toplam2;
	cvtColor(toplam2, toplam2, CV_BGR2HSV);
	inRange(toplam2, Scalar(0, 0, 255), Scalar(255, 255, 255), toplam2);
 
    
	imshow("son çýktý",toplam2);

 
	dilate(toplam2, toplam2, getStructuringElement(MORPH_ELLIPSE, Size(10, 10)));
    
	vector<vector<Point>> kontur;
	vector<Vec4i> hiyerarsi;
	findContours(toplam2, kontur, hiyerarsi, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);
	Mat outImage(toplam2.size(), CV_8UC3);
	RotatedRect rect;
	Moments momy;
	 
	for (int i = 0; i < kontur.size(); i++)
	{   
		    drawContours(outImage, kontur, i, Scalar(0, 0, 0), CV_FILLED, 8, hiyerarsi, 0, Point());
			rect = minAreaRect(kontur[i]);
			momy = moments(kontur[i]);
			printf("ALAN %f \n",momy.m00 );
			if (momy.m00 > 1000)
			{
				enbAlan = momy.m00;
				xbaslnagic = momy.m10 / momy.m00;
				baslangicDiziX[i] = xbaslnagic;
				yBaslangic = momy.m01 / momy.m00;
				baslangicDiziY[i] = yBaslangic;
				putText(outImage, format("%d", i + 1), rect.center, 1, 1, Scalar(0, 0, 255));
           }
		
	 }

 
	 

	  kenar = sqrt(enbAlan);//kenar uzunluðu
	  ustX = xbaslnagic - (kenar / 2);//X baslangic noktasý
	  ustY = yBaslangic - (kenar / 2);//Y baslangic noktasý
	  artisMiktar = kenar / 4;//artýþ miktarý

	printf("kenar %d", kenar);
	printf("xxx %d", ustX);
	printf("yyy %d", ustY);
	printf("artisMiktar %d", artisMiktar);

	putText(outImage, "0", Point(ustX, ustY), 1, 1, Scalar(0, 0, 255));
	putText(outImage, "1", Point(ustX + artisMiktar, ustY), 1, 1, Scalar(0, 0, 255));
	putText(outImage, "2", Point(ustX + (artisMiktar*2), ustY), 1, 1, Scalar(0, 0, 255));
	putText(outImage, "3", Point(ustX + (artisMiktar*3), ustY), 1, 1, Scalar(0, 0, 255));
	putText(outImage, "4", Point(ustX + (artisMiktar * 4), ustY), 1, 1, Scalar(0, 0, 255));

	putText(outImage, "0", Point(ustX, ustY), 1, 1, Scalar(0, 0, 255));
	putText(outImage, "1", Point(ustX, ustY+ artisMiktar ), 1, 1, Scalar(0, 0, 255));
	putText(outImage, "2", Point(ustX, ustY + (artisMiktar*2)), 1, 1, Scalar(0, 0, 255));
	putText(outImage, "3", Point(ustX, ustY + (artisMiktar*3)), 1, 1, Scalar(0, 0, 255));
	putText(outImage, "4", Point(ustX, ustY + (artisMiktar*4)), 1, 1, Scalar(0, 0, 255));


	imshow("son çýktý 2", outImage);
	imwrite("c:/users/acer/desktop/droneGorevDeneme2/kenarIsaretli.jpg", outImage);
}

int main()
{
 

    int renkArt=255, renkAzal=0, canlilikArt=255, canlilikAzal=0, degerArt=255, degerAzal=0;
	int hedefKontrol = 0;
	
	VideoCapture videoOku(2);
 
	Mat video;
	//while (true)
	
//	{
 
	//	videoOku.read(video);
		

		//imshow("orjinal", video);

		//printf("kýrmýzý alan %d\n",r3Alan);//alanlarý yazdýrýlýyor.

		//printf("yesil alan %d\n", r2Alan);

		//printf("mavi alan %d\n", r1Alan);

		//if (r1Alan == 1 && r2Alan == 1  &&r3Alan == 1)//eðer 3 renkte bulunduysa fotoðraf çekiyor
		//{

		////	resize(video,video,size);//foto boyutu 200*200 olarak ayarlanýyor 
  //          imwrite("c:/users/acer/desktop/hedef.jpg", video);
		//  	break;
		//}
		
		/*cvtColor(video,video,CV_BGR2HSV);

		r1(video,hedefKontrol);
		r2(video, hedefKontrol);
		r3(video, hedefKontrol);
*/
	//	if (waitKey(20) == 27)
	//	{

		//	break;
		//}

		
		//imshow("video", video);
	//}

	

	Mat can,dst,dst2,inran,bizim;
	Mat anaResim = imread("C:/Users/Acer/Desktop/drone7.jpg");
	
	
	Size size(anaResim.cols/5, anaResim.rows/5);//çekilen çözünürlüðün 1/5 ini alýyor
	
	cvtColor(anaResim, anaResim, CV_BGR2HSV);
	
	hedefKontrol = 1;
	resize(anaResim,anaResim,size);

	r1(anaResim, hedefKontrol);//mavi
	r2(anaResim, hedefKontrol);//yesil
	r3(anaResim, hedefKontrol);//kýrmýzý

	boya();

    Mat r1 = imread("c:/users/acer/desktop/droneGorevDeneme2/maviTrash.jpg", CV_LOAD_IMAGE_GRAYSCALE);
	Mat r2= imread("c:/users/acer/desktop/droneGorevDeneme2/yesilTrash.jpg", CV_LOAD_IMAGE_GRAYSCALE);
	Mat r3 = imread("c:/users/acer/desktop/droneGorevDeneme2/kirmiziTrash.jpg", CV_LOAD_IMAGE_GRAYSCALE);
     

	isaretle(r1);//mavi
	dosyaYaz(1);
    
	isaretle(r2);//yeþi
	dosyaYaz(2);
	
	isaretle(r3);//kýrmýzý
	dosyaYaz(3);
	int rand1;
	FILE *open;
	open = fopen("c:/users/acer/desktop/droneGorev1Deneme.txt", "w");
	for (int i = 0; i < 16; i++)
	{
		rand1 = rand()% 3;
		if (i % 4 == 1)
		{
			printf("\n");
		}
		if (sonucDizi[i] == 3)
		{
			sonucDizi[i] = rand1;
		 }
		printf("%d", sonucDizi[i]);
		fprintf(open, "%d", sonucDizi[i]);
	}
	fclose(open);
	waitKey(0);
	getchar();

}

