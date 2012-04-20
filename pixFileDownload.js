//
//  pixFileDownload.js
//  FileDownLoadApp
//
//  Original created by Aaron Saunders on 9/8/10.
//  Copyright 2010 clearly innovative llc. All rights reserved.
//
//  Modified by Johnathan Iannotti on 04/20/2012
//  Twitter: @notticode

function PixFileDownload() {
}

PixFileDownload.prototype.downloadFile = function(url,destFileName) {
    cordova.exec("PixFileDownload.downloadFile", url,destFileName);
};

cordova.addConstructor(function() {
						window.fileDownloadMgr = new PixFileDownload();
						});

function  pixFileDownloadComplete( filePath ) {
	alert( "Success \r" + filePath );
}

function  pixFileDownloadCompleteWithError( message ) {
    alert( "Error \r" + message );
}
