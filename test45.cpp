#include <iostream>
#include <vector>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc_c.h"
#include "fstream"
#include <direct.h>
#include <io.h>
#include <Windows.h>

using namespace std;
using namespace cv;

extern int readDir(char *dirName, vector<string> &filesName);





int test45_0(int argc, char *argv[])
{
	
	string imgpath = "E:\\车头分类2类\\head-train-2类\\1-主动遮挡-car-aug2";
	string txtpath = "E:\\车头分类2类\\head-train-2类\\0.txt";
	                                    int label =0;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL！\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}
int test45_1(int argc, char *argv[])
{
	
	string imgpath = "E:\\车头分类2类\\head-train-2类\\3_被动遮挡-car-aug2";
	string txtpath = "E:\\车头分类2类\\head-train-2类\\1.txt";
	                                   int label = 1;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);
	
	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];
		
		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL！\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str()<< endl;

		finWrite << fullname.c_str() << " " << label << endl;
	
	}
	
	finWrite.close();

	return 0;
}
int test45_2(int argc, char *argv[])
{
	
	string imgpath = "E:\\车牌分类13\\plate-val\\2-污损-plate";
	string txtpath = "E:\\车牌分类13\\plate-val\\2.txt";
	                                   int label = 2;


	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL！\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}
int test45_3(int argc, char *argv[])
{
	
	string imgpath = "E:\\车牌分类12\\plate-train\\3_水印车牌-plate";
	string txtpath = "E:\\车牌分类12\\plate-train\\3.txt";
	                                   int label = 3;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL！\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}
int test45_4(int argc, char *argv[])
{
	
	string imgpath = "E:\\车牌分类12\\plate-train\\4-上下残缺-plate";
	string txtpath = "E:\\车牌分类12\\plate-train\\4.txt";
	                                   int label = 4;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL！\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}

int test45_5(int argc, char *argv[])
{

	string imgpath = "E:\\车牌分类12\\plate-train\\5-左右残缺-plate";
	string txtpath = "E:\\车牌分类12\\plate-train\\5.txt";
	                                   int label = 5;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL！\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}
int test45_6(int argc, char *argv[])
{

	string imgpath = "E:\\车牌分类12\\plate-train\\6-模糊-plate";
	string txtpath = "E:\\车牌分类12\\plate-train\\6.txt";
	                                   int label = 6;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL！\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}
int test45_7(int argc, char *argv[])
{

	string imgpath = "E:\\车牌分类12\\plate-train\\7_曝光车牌-plate";
	string txtpath = "E:\\车牌分类12\\plate-train\\7.txt";
	                                    int label =7;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL！\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}
int test45_8(int argc, char *argv[])
{

	string imgpath = "E:\\车牌分类12\\plate-train\\8-非车牌-plate";
	string txtpath = "E:\\车牌分类12\\plate-train\\8.txt";
	                                   int label = 8;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL！\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
	
}

int test45_9(int argc, char *argv[])
{

	string imgpath = "E:\\车牌分类13\\plate-val\\1_被动遮挡-plate";
	string txtpath = "E:\\车牌分类13\\plate-val\\1-2.txt";
	                                    int label = 1;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL！\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
	
}

int test45_10(int argc, char *argv[])
{

	string imgpath = "E:\\车牌分类6\\0src-6train\\nocolor-roi\\10-其他";
	string txtpath = "E:\\车牌分类6\\0src-6train\\nocolor-roi\\10.txt";
                                                 	int label = 10;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead 文件数据打开错误！" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL！\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;

}















void readFile(string Path, FILE* f)
{
	ifstream ReadFile;
	ReadFile.open(Path, ios::in);
	if (ReadFile.fail())//文件打开失败:返回0  
	{
		printf("文件打开失败:\n");
		return;
	}
	else//文件存在  
	{
		string tmp;
		while (getline(ReadFile, tmp, '\n'))
		{
			fprintf(f, "%s\n", tmp.c_str());
		}
		ReadFile.close();

	}
}

int test45_txt(int argc, char *argv[])
{
	                        int nclass = 2;
	string save_dir = "E:\\车头分类2类\\head-train-2类\\all.txt";
	argv[2] = "E:\\车头分类2类\\head-train-2类\\0.txt";
	argv[3] = "E:\\车头分类2类\\head-train-2类\\1.txt";



	//argv[4] = "E:\\车牌分类13\\plate-val\\2.txt";
	//argv[5] = "E:\\车牌分类13\\plate-val\\1-2.txt";

	/*argv[5] = "E:\\车牌分类12\\plate-train-aug2\\3.txt";
	argv[6] = "E:\\车牌分类12\\plate-train-aug2\\4.txt";
	argv[7] = "E:\\车牌分类12\\plate-train-aug2\\5.txt";
	argv[8] = "E:\\车牌分类12\\plate-train-aug2\\6.txt";
	argv[9] = "E:\\车牌分类12\\plate-train-aug2\\7.txt";
	argv[10] = "E:\\车牌分类12\\plate-train-aug2\\8.txt";*/
	//argv[11] = "E:\\车牌分类12\\plate-train-aug2\\1-2.txt";

	/*
	argv[12] = "E:\\车牌分类6\\0src-6train\\src-roi\\10.txt";
	*/


	FILE* f = fopen(save_dir.c_str(), "w");
	for (int i = 2; i<nclass+2; i++)
	{
		string Path = argv[i];
		readFile(Path, f);
	}
	fclose(f);
	return 0;
}
int test45(int argc, char *argv[])
{
	test45_0(argc, argv);
	test45_1(argc, argv);
	//test45_2(argc, argv);

	/*test45_3(argc, argv);
	test45_4(argc, argv);
	test45_5(argc, argv);
	test45_6(argc, argv);
	test45_7(argc, argv);
	test45_8(argc, argv);
	*/

	//test45_9(argc, argv);

	/*
	test45_10(argc, argv);
	*/
	



	test45_txt(argc, argv);

	return 0;
}

