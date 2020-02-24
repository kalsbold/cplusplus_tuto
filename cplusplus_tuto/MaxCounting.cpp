#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
using namespace std;

/*

�� ��� ���ϱ�
- ���� ���� ���� �� ����

��� ����б����� �ǽ��� 1000���� ���� ������ ���� ��� �ڷḦ ������� �Ѵ�.

�̶�, �� �б������� �ֺ���� �̿��Ͽ� �л����� ��� ������ �����ϴµ�, ���⼭ �ֺ���� Ư�� �ڷῡ�� ���� ���� �� ��Ÿ���� ���� �ǹ��Ѵ�.

������ ���� �� ������ ������,

10, 8, 7, 2, 2, 4, 8, 8, 8, 9, 5, 5, 3

�ֺ���� 8�� �ȴ�.

�ֺ���� ����ϴ� ���α׷��� �ۼ��Ͽ��� (��, �ֺ���� ���� �� �� ������ ���� ū ������ ����϶�).

[���� ����]

�л��� ���� 1000���̸�, �� �л��� ������ 0�� �̻� 100�� ������ ���̴�.

[�Է�]

ù ��° �ٿ� �׽�Ʈ ���̽��� �� T�� �־�����.

�� �׽�Ʈ ���̽��� ù �ٿ��� �׽�Ʈ ���̽��� ��ȣ�� �־����� �� ���� �ٺ��ʹ� ������ �־�����.

[���]

#��ȣ�� �Բ� �׽�Ʈ ���̽��� ��ȣ�� ����ϰ�, ���� ���� �� �׽�Ʈ ���̽��� ���� ���� ����Ѵ�.



void main()
{
	ifstream input;
	input.open("input.txt");
	string s;


	if (!input.is_open()) {
		cout << "file not open..." << endl;
		return;
	}
	else
	{
		int T = 0, time = 0;  //�� Ƚ���� �ݺ����� Ƚ��.

		input >> T;  //���Ͽ��� ����. ��Ƚ

		cout << "T = " << T << endl;
		for (int j = 0; j < T; j++) {

			int arr_count[100] = { 0, };  // 0��~100���� ���� �󵵸� üũ�ϴ� �迭.
			input >> time; //���� Ƚ�� ����
			for (int i = 0; i < 1000; i++)   //1000 ���� ������ �о� ī��Ʈ �迭�� ����.
			{
				int score = 0;
				input >> score; //�� ���� ����

				
				arr_count[score]++;
			}

			int max_index = 0;
			for (int i = 0; i < 100; i++)
			{
				if (arr_count[i] > arr_count[max_index])
				{
					max_index = i;
				}
				else if (arr_count[i] == arr_count[max_index])
				{
					if (i >= max_index)
					{
						max_index = i;
					}
				}
			}

			cout << "time : " << time << " max_count_score : " << max_index+1 << endl;
		}
	}


}

*/


/*
������ �������� ������ �����ϰ� ������ ������ �ִ�.

�̰������� �������� �ʹ� �¿�� �����Ͽ�, ���� ���� ������ ��� ���뿡�� ������ ���� �Ǵ� ������ â���� ������ �� �ٷ� �տ� �� �ǹ��� ���̴� ��찡 ����Ͽ���.

�׷��� �� ���������� ���ʰ� ���������� â���� ������ ��, ���� ��� �Ÿ� 2 �̻��� ������ Ȯ���� �� �������� Ȯ���ȴٰ� ���Ѵ�.

�����鿡 ���� ������ �־��� ��, �������� Ȯ���� ������ ���� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Ʒ��� ���� ������ 8ä�� ������ ���� ��, ���λ����� ��ĥ�� ���� ���뿡���� �¿�� 2ĭ �̻��� ������ �����ϹǷ� �������� Ȯ���ȴ�. ���� ���� 6�� �ȴ�.

A�� B�� ǥ�õ� ������ ���� ���� ������ 2ĭ �̻� Ȯ���� �Ǿ����� ������ ������ �� ĭ �ۿ� Ȯ���� ���� �����Ƿ� �������� Ȯ������ ���Ͽ���.

C�� ���� �ݴ�� ������ ������ 2ĭ�� Ȯ���� �Ǿ����� ���� ������ �� ĭ �ۿ� Ȯ������ �ʾҴ�.

[���� ����]

���� ���̴� �׻� 1000���Ϸ� �־�����.

�� ���� �� ĭ�� �� ������ �� ĭ���� �ǹ��� �������� �ʴ´�. (���ÿ��� ������ �� �κ�)

�� ������ ���̴� �ִ� 255�̴�.

[�Է�]

�Է� ������ ù ��° �ٿ��� �׽�Ʈ���̽��� ���̰� �־�����. �� �ٷ� ���� �ٿ� �׽�Ʈ ���̽��� �־�����.

�� 10���� �׽�Ʈ���̽��� �־�����.

[���]

#��ȣ�� �Բ� �׽�Ʈ ���̽��� ��ȣ�� ����ϰ�, ���� ���� �� �׽�Ʈ ���̽��� �������� Ȯ���� ������ ���� ����Ѵ�.

n������ �¿� 2ĭ �ٸ� �ǹ��� ���� ����� üũ.

*/


void main()
{
	time_t start, end;
	//���� ����.
	ifstream input;
	input.open("input2.txt");
	double result =0;

	if (!input.is_open()) {
		cout << "file not open..." << endl;
		return;
	}
	else
	{
		start = clock();
		for (int time1 = 0; time1 < 10; time1++)
		{
			int width = 0;
			int* arr_height;
			int total_view = 0;
			//���α��� ����.
			input >> width;

			arr_height = new int[width];
			//���α��̸�ŭ �ݺ� ���� 
			for (int i = 0; i < width; i++)
			{
				input >> arr_height[i];//���� ����
			}
			
			for (int i = 2; i < width-2;++i)
			{
				//���� 0�̸� ��ŵ.
				if (arr_height[i] != 0)
				{
					//���� 0�ƴϸ� ���� ��ġ���� �¿�� 2ĭ���� ���� ��
					if (arr_height[i - 2] < arr_height[i] && arr_height[i - 1] < arr_height[i] && arr_height[i + 1] < arr_height[i] && arr_height[i + 2] < arr_height[i])
					{
						int min_height = arr_height[i] - arr_height[i - 2];
						if (min_height > arr_height[i] - arr_height[i - 1])
							min_height = arr_height[i] - arr_height[i - 1];
						if (min_height > arr_height[i] - arr_height[i + 1])
							min_height = arr_height[i] - arr_height[i + 1];
						if (min_height > arr_height[i] - arr_height[i + 2])
							min_height = arr_height[i] - arr_height[i + 2];

						total_view += min_height;
					}
				}
				
			}
			
			// �ݺ��� ��� ���
			cout << "#" << time1 << " " << total_view << endl;

		//���� �׽�Ʈ ���̽���.
			delete[] arr_height;

			end = clock();

			result += (double)(end - start);

			cout << "����ð� : " << result/ CLOCKS_PER_SEC << " s "<< endl;
		}
	}
}