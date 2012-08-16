//
//  QSQRObjectQualifier.h
//  QSQRCode
//
//  Created by Eric Doughty-Papassideris on 3/01/10.
//  Copyright 2010. All rights reserved.
//


@interface QSQRObjectQualifier : NSObject {
	NSDictionary *converters;
}

+(QSQRObjectQualifier *)qualifierWithDefaultConverters;

-(NSString *)qualify:(QSObject *)obj;

@property (retain) NSDictionary *converters;

@end
