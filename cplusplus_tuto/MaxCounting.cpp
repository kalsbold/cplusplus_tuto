#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
using namespace std;

/*

최 빈수 구하기
- 가장 많이 나온 수 고르기

어느 고등학교에서 실시한 1000명의 수학 성적을 토대로 통계 자료를 만들려고 한다.

이때, 이 학교에서는 최빈수를 이용하여 학생들의 평균 수준을 짐작하는데, 여기서 최빈수는 특정 자료에서 가장 여러 번 나타나는 값을 의미한다.

다음과 같은 수 분포가 있으면,

10, 8, 7, 2, 2, 4, 8, 8, 8, 9, 5, 5, 3

최빈수는 8이 된다.

최빈수를 출력하는 프로그램을 작성하여라 (단, 최빈수가 여러 개 일 때에는 가장 큰 점수를 출력하라).

[제약 사항]

학생의 수는 1000명이며, 각 학생의 점수는 0점 이상 100점 이하의 값이다.

[입력]

첫 번째 줄에 테스트 케이스의 수 T가 주어진다.

각 테스트 케이스의 첫 줄에는 테스트 케이스의 번호가 주어지고 그 다음 줄부터는 점수가 주어진다.

[출력]

#부호와 함께 테스트 케이스의 번호를 출력하고, 공백 문자 후 테스트 케이스에 대한 답을 출력한다.



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
		int T = 0, time = 0;  //총 횟수와 반복중인 횟수.

		input >> T;  //파일에서 읽읽. 총횟

		cout << "T = " << T << endl;
		for (int j = 0; j < T; j++) {

			int arr_count[100] = { 0, };  // 0점~100점의 점수 빈도를 체크하는 배열.
			input >> time; //현재 횟수 읽읽
			for (int i = 0; i < 1000; i++)   //1000 명의 점수를 읽어 카운트 배열에 저장.
			{
				int score = 0;
				input >> score; //각 점수 읽읽

				
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
강변에 빌딩들이 옆으로 빽빽하게 밀집한 지역이 있다.

이곳에서는 빌딩들이 너무 좌우로 밀집하여, 강에 대한 조망은 모든 세대에서 좋지만 왼쪽 또는 오른쪽 창문을 열었을 때 바로 앞에 옆 건물이 보이는 경우가 허다하였다.

그래서 이 지역에서는 왼쪽과 오른쪽으로 창문을 열었을 때, 양쪽 모두 거리 2 이상의 공간이 확보될 때 조망권이 확보된다고 말한다.

빌딩들에 대한 정보가 주어질 때, 조망권이 확보된 세대의 수를 반환하는 프로그램을 작성하시오.

아래와 같이 강변에 8채의 빌딩이 있을 때, 연두색으로 색칠된 여섯 세대에서는 좌우로 2칸 이상의 공백이 존재하므로 조망권이 확보된다. 따라서 답은 6이 된다.

A와 B로 표시된 세대의 경우는 왼쪽 조망은 2칸 이상 확보가 되었지만 오른쪽 조망은 한 칸 밖에 확보가 되지 않으므로 조망권을 확보하지 못하였다.

C의 경우는 반대로 오른쪽 조망은 2칸이 확보가 되었지만 왼쪽 조망이 한 칸 밖에 확보되지 않았다.

[제약 사항]

가로 길이는 항상 1000이하로 주어진다.

맨 왼쪽 두 칸과 맨 오른쪽 두 칸에는 건물이 지어지지 않는다. (예시에서 빨간색 땅 부분)

각 빌딩의 높이는 최대 255이다.

[입력]

입력 파일의 첫 번째 줄에는 테스트케이스의 길이가 주어진다. 그 바로 다음 줄에 테스트 케이스가 주어진다.

총 10개의 테스트케이스가 주어진다.

[출력]

#부호와 함께 테스트 케이스의 번호를 출력하고, 공백 문자 후 테스트 케이스의 조망권이 확보된 세대의 수를 출력한다.

n층에서 좌우 2칸 다른 건물의 층이 없어야 체크.

*/


void main()
{
	time_t start, end;
	//파일 읽읽.
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
			//가로길이 읽읽.
			input >> width;

			arr_height = new int[width];
			//가로길이만큼 반복 ㄱㄱ 
			for (int i = 0; i < width; i++)
			{
				input >> arr_height[i];//높이 읽읽
			}
			
			for (int i = 2; i < width-2;++i)
			{
				//높이 0이면 스킵.
				if (arr_height[i] != 0)
				{
					//높이 0아니면 현재 위치에서 좌우로 2칸까지 높이 비교
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
			
			// 반복끝 결과 출력
			cout << "#" << time1 << " " << total_view << endl;

		//다음 테스트 케이스로.
			delete[] arr_height;

			end = clock();

			result += (double)(end - start);

			cout << "실행시간 : " << result/ CLOCKS_PER_SEC << " s "<< endl;
		}
	}
}