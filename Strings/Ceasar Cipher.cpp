string caesarCypherEncryptor(string str, int key) {
	std::for_each(str.begin(),str.end(),[key](char &s){
		s = (s - 'a' + key)%26 + 'a';
	});
  return str;
}

