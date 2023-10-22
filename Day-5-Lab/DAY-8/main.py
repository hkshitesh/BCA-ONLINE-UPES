import sys
from PySide6.QtCore import QUrl
from PySide6.QtWidgets import QApplication
from PySide6.QtQuick import QQuickView
import pandas as pd

# Read data from Excel
df = pd.read_excel('data.xlsx')

# Convert data to list of dictionaries
data_list = df.to_dict('records')

app = QApplication(sys.argv)
view = QQuickView()
url = QUrl("view.qml")

# Set context property for data
context = view.rootContext()
context.setContextProperty("dataModel", data_list)

view.setSource(url)
view.show()
sys.exit(app.exec_())
