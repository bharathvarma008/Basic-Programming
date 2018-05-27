# Coding utf-8
import sumy
from sumy.parsers.plaintext import PlaintextParser #We're choosing a plaintext parser here, other parsers available for HTML etc.
from sumy.nlp.tokenizers import Tokenizer 
from sumy.summarizers.lex_rank import LexRankSummarizer #We're choosing Lexrank, other algorithms are also built in

class Summarizer:
    def get_summarized(self, input, num_sentences ):
        parser = PlaintextParser(input, Tokenizer("english"))
        summarizer = LexRankSummarizer()
        #Summarize the document with defined no.of sentences
        summary = summarizer(parser.document, num_sentences)
        list_summary = [str(item) for item in summary]
        return list_summary

