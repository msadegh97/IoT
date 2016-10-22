from django.db import models

class raspberry(models.Model):
    raspberry_id=models.CharField(max_length=20)
    bl = models.BooleanField(default=False)
    def __str__(self):
         return str(self.bl)