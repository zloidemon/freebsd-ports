# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: ports/benchmarks/nosqlbench/Makefile,v 1.1 2012/12/11 20:06:10 svnexp Exp $

PORTNAME=	nosqlbench
PORTVERSION=	0.0.${DATE}
CATEGORIES=	benchmarks databases
MASTER_SITES=	http://fbsd.zlonet.ru/distfiles/

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Micro-benchmarking NoSQL storage

LIB_DEPENDS=	tarantool:${PORTSDIR}/databases/tarantool

DATE=		20120802
USE_BZIP2=	yes
USE_CMAKE=	yes
CMAKE_ARGS=	-DLIBTNT_INCLUDE=${LOCALBASE}/include \
		-DLIBTNT_LIB=${LOCALBASE}/lib

pre-configure:
	${REINPLACE_CMD} 's#DESTINATION doc#DESTINATION ${DOCSDIR}#g' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
