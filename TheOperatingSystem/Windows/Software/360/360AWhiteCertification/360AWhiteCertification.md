#360AWhiteCertification
	过白步骤：
		1.makecert -n "CN=xxx" -r -sky signature -sv xxx.pvk xxx.cer
		2.cert2spc xxx.cer xxx.spc
		3.pvk2pfx -pvk xxx.pvk -spc xxx.spc -pfx xxx.pfx
		4.install  xxx.pfx and choose person path
		5.install xxx.cer and choose organization
		6.

		