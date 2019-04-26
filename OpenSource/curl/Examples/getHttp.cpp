
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <curl/curl.h>
#include <iostream>

using namespace std;


void download(string strHttp)
{
	CURL *curl = NULL;
	CURLcode res = CURLE_OK;
	string response;
	curl = curl_easy_init();
	if(curl)
	{
		curl_easy_setopt(curl, CURLOPT_URL, strHttp.c_str());
		res = curl_easy_perform(curl);
		cout<<"res:"<<res<<endl;
		CURLcode code;
		char *url;
		long rescode = 0;
		code = curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &rescode);
		cout<<"code:"<<code<<",rescode:"<<rescode<<endl;
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
		code = curl_easy_getinfo(curl, CURLINFO_REDIRECT_URL, &url);
		cout<<"code...:"<<code<<endl;
		if(curl)
			cout<<"url:"<<url<<endl;

	}
	curl_easy_cleanup(curl);
}

int main(int argc, char *argv[])
{
	if(argc <2)
	{
		fprintf(stderr, "the argc is less than two");
		return -1;
	}
	string strHttp(argv[1]);
	download(strHttp);

	return 0;
}
