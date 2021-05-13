import requests
from bs4 import BeautifulSoup
import random
import scriptRunner


def scrapeWikiArticle(url):
	while True:
		#grabbing the wiki page
		response = requests.get(
			url=url,
		)

		#parsing it with soup
		soup = BeautifulSoup(response.content, 'html.parser')

		#grabbing the title and displaying it
		title = soup.find(id="firstHeading")
		print(title.text)

		#finding the python code in the html
		codes1 = soup.find_all("code",{"class","mw-highlight mw-highlight-lang-python mw-content-ltr"})
		codes2 = soup.find_all("div", {"class","mw-highlight mw-highlight-lang-python mw-content-ltr"})
		
		#running through the content soup grabs and running it with the script runner
		if (codes1 is None) or (codes2 is None):
			continue
		else:
			for code1 in codes1:
				code1 = code1.get_text()
				scriptRunner.scriptRunner.RunScript(code1)
				if code1.find("Hello") == -1:
					continue
				else:
					exit(0)

			for code2 in codes2:
				code2 = code2.get_text()
				scriptRunner.scriptRunner.RunScript(code2)
				if code2.find("Hello") == -1:
					continue
				else:
					exit(0)

scrapeWikiArticle("https://en.wikipedia.org/wiki/Special:Random")

#links that give results
#https://en.wikipedia.org/wiki/Python_(programming_language)
#scrapeWikiArticle("https://en.wikipedia.org/wiki/%22Hello,_World!%22_program")
