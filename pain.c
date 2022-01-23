#include <stdio.h>
#include <string.h>


int main(){

	int i, j, k, l, m, n, o, p;
	char ref[] = {"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char url[] = {"00000000"};
	char pbURL[] = {"https://pastebin.com/raw/"};
	char bufferURL[40];
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
									strcpy(bufferURL, pbURL);
									strcat(bufferURL, url);
									printf("%s\n", bufferURL);
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
