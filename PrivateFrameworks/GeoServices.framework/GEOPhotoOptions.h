/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhotoOptions : PBCodable <NSCopying> {
    struct { 
        unsigned int photoType : 1; 
    }  _has;
    int  _maxPhotos;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _photoSizes;
    int  _photoType;
}

@property (nonatomic) bool hasPhotoType;
@property (nonatomic) int maxPhotos;
@property (nonatomic, readonly) int*photoSizes;
@property (nonatomic, readonly) unsigned long long photoSizesCount;
@property (nonatomic) int photoType;

- (int)StringAsPhotoSizes:(id)arg1;
- (int)StringAsPhotoType:(id)arg1;
- (void)addPhotoSize:(int)arg1;
- (void)clearPhotoSizes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPhotoType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)maxPhotos;
- (void)mergeFrom:(id)arg1;
- (int)photoSizeAtIndex:(unsigned long long)arg1;
- (int*)photoSizes;
- (id)photoSizesAsString:(int)arg1;
- (unsigned long long)photoSizesCount;
- (int)photoType;
- (id)photoTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPhotoType:(bool)arg1;
- (void)setMaxPhotos:(int)arg1;
- (void)setPhotoSizes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPhotoType:(int)arg1;
- (void)writeTo:(id)arg1;

@end