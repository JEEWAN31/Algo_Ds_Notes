from email import header
import requests

pixela_endpoint = "https://pixe.la/v1/users"

TOKEN = "hib43bjdsbkj"
USERNAME = "aneewanjj"

user_param = {
    "token": "hib43bjdsbkj",
    "username": "aneewanjj",
    "agreeTermsOfService": "yes",
    "notMinor": "yes"
    }


#response = requests.post(url=pixela_endpoint, json = user_param)
#print(response.text)


graph_endpoint = f"{pixela_endpoint}/{USERNAME}/graphs"

graph_config = {
    "id" : "Graph1",
    "name" : "Coding Hours",
    "units" : "Hours",
    "type" : "float",
    "color" : "aiisai"
}

headers = {
    "X-USER_TOKEN": TOKEN
}
response =requests.post(url = graph_endpoint, json = graph_config ,headers=header) 

print(response.text)