/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSurchargeUnit : PBCodable <NSCopying> {
    GEOTransitPrice * _price;
}

@property (nonatomic, readonly) bool hasPrice;
@property (nonatomic, retain) GEOTransitPrice *price;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPrice;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)price;
- (bool)readFrom:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)writeTo:(id)arg1;

@end