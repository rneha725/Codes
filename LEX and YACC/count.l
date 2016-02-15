%{
	int charCount=0, lineCount=0;
%}

%%
. charCount++;
\n { charCount++; lineCount++; }
%%

int main() {
	yylex();
	printf("%d %d", charCount, lineCount);
	return 0;
}
