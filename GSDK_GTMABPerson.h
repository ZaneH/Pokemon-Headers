//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSDK_GTMABRecord.h"

@interface GSDK_GTMABPerson : GSDK_GTMABRecord
{
}

+ (unsigned int)compositeNameFormat;
+ (id)localizedPropertyName:(int)arg1;
+ (id)personWithFirstName:(id)arg1 lastName:(id)arg2;
+ (unsigned int)typeOfProperty:(int)arg1;
- (id)compositeName;
- (id)description;
- (struct UIImage *)image;
- (id)imageData;
- (id)init;
- (_Bool)setImage:(struct UIImage *)arg1;
- (_Bool)setImageData:(id)arg1;

@end

