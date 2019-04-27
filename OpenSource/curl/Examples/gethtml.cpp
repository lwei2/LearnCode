
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <curl/curl.h>

using namespace std;

int main(int argc, char *argv[])
{
	CURL *curl;
	CURLcode res;

	if(argc!=2)
	{
		fprintf(stderr, "file <url>");
		exit(1);
	}
	curl = curl_easy_init();
	if(curl)
	{
		curl_easy_setopt(curl, CURLOPT_URL, argv[1]);
		res = curl_easy_perform(curl);
		cout<<"res:"<<res<<endl;
		curl_easy_cleanup(curl);
	}
	
	return 0;
}
