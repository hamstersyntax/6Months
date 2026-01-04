from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.
def index(request):
    return HttpResponse("Syntax!!")
def hamster(request):
    return HttpResponse("Hamster Syntax")
def sayName(request,name):
    return 