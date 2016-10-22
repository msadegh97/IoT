from django.shortcuts import render
from django.http import HttpResponse
from .models import raspberry

def payam(request,id_ras):
    all_ras=raspberry.objects.all()
    ras=all_ras.filter(raspberry_id=id_ras)
    return HttpResponse(ras)


def give_req(reqest,id_ras,bl):
    all_ras=raspberry.objects.all()
    ras=all_ras.filter(raspberry_id=id_ras)
    if bl =='1':
        ras.update(bl=True)
    else:
        ras.update(bl=False)

    return HttpResponse('done')



