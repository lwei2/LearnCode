
#include <stdio.h>
#include <curl/curl.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
	CURL *curl;
	CURLcode res;
	struct stat file_info;
	curl_off_t speed_upload, total_time;
	FILE *fd;
	fd = fopen("index.html", "rb");
	if(!fd)
		return 1;
	if(fstat(fileno(fd), &file_info))
		return 1;
	curl = curl_easy_init();
	if(curl)
	{
		curl_easy_setopt(curl, CURLOPT_URL, "http://192.168.79.131/doc/index.html");
		curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
		curl_easy_setopt(curl, CURLOPT_READDATA, fd);
		curl_easy_setopt(curl, CURLOPT_INFILESIZE_LARGE, (curl_off_t)file_info.st_size);
		curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
		res = curl_easy_perform(curl);
		if(res!=CURLE_OK)
		{
			fprintf(stderr, "curl_easy_perform failed:%s", curl_easy_strerror(res));
		}
		else
		{
			curl_easy_getinfo(curl, CURLINFO_SPEED_UPLOAD_T, &speed_upload);
			curl_easy_getinfo(curl, CURLINFO_TOTAL_TIME_T, &total_time);
			 fprintf(stderr, "Speed: %" CURL_FORMAT_CURL_OFF_T " bytes/sec during %"
				               CURL_FORMAT_CURL_OFF_T ".%06ld seconds\n",
							                 speed_upload,
											               (total_time / 1000000), (long)(total_time % 1000000));
		}
		curl_easy_cleanup(curl);
	}
	fclose(fd);
	return 0;
}
