//
//  PixFileDownload.h
//  FileDownLoadApp
//
//  Original created by Aaron Saunders on 9/8/10.
//  Copyright 2010 clearly innovative llc. All rights reserved.
//
//  Modified by Johnathan Iannotti on 04/20/2012
//  Twitter: @notticode

#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>

@interface PixFileDownload : CDVPlugin {
	NSMutableArray* params;
}

-(void) downloadFile:(NSMutableArray*)paramArray withDict:(NSMutableDictionary*)options;
-(void) downloadComplete:(NSString *)filePath;
-(void) downloadCompleteWithError:(NSString *)errorStr; 
-(void) downloadFileFromUrlInBackgroundTask:(NSMutableArray*)paramArray;
-(void) downloadFileFromUrl:(NSMutableArray*)paramArray;
@end
