#include <stdio.h>
#include <curl/curl.h>
#include <string.h>

int download( char *gen ) {
	CURL *curl;
	FILE *fp;
	int result;
	char url[] = {"https://pastebin.com/raw/"};

	fp = fopen(gen, "wb");
	strcat(url, gen);

	curl = curl_easy_init();
	curl_easy_setopt(curl, CURLOPT_URL, url);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
	curl_easy_setopt(curl, CURLOPT_FAILONERROR, 1L);

	result = curl_easy_perform(curl);

	fclose(fp);

	if(result == CURLE_OK) {
		printf("#############################\n");
		printf("######    dl success    #####\n");
		printf("#############################\n");
	} else {
		remove(gen);
	}

	curl_easy_cleanup(curl);
}


int main(){

	int i, j, k, l, m, n, o, p;
	char ref[] = {"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char url[] = {"00000000"};
	int base = sizeof ref - 1;

	for (i = 0 ; i < base ; i++){
		for (j = 0 ; j < base ; j++){
			for (k = 0 ; k < base ; k++){
				for (l = 0 ; l < base ; l++){
					for (m = 0 ; m < base ; m++){
						for (n = 0 ; n < base ; n++){
							for (o = 0 ; o < base ; o++){
								for (p = 0 ; p < base ; p++){
								 
									url[7] = ref[p];
									printf("%s\n", url);
									download(url);
									}
								url[6] = ref[o];
								}
							url[5] = ref[n];
							}
						url[4] = ref[m];
						}
					url[3] = ref[l];
					}
				url[2] = ref[k];
				}

			url[1] = ref[j];
		}
		url[0] = ref[i];
		printf("\n");
	}
	return 0;
}
