/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __FILTER_H__
#define __FILTER_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #filter(const FilterRequest&) const}.
     * <p>
     * Filters data based on the specified expression.  The results are stored
     * in a result set with the given @a viewName.
     * <p>
     * For details see <a href="../../concepts/index.html#expressions"
     * target="_top">concepts</a>.
     * <p>
     * The response message contains the number of points for which the
     * expression evaluated to be true, which is equivalent to the size of the
     * result view.
     */
    struct FilterRequest
    {

        /**
         * Constructs a FilterRequest object with default parameter values.
         */
        FilterRequest() :
            tableName(std::string()),
            viewName(std::string()),
            expression(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a FilterRequest object with the specified parameters.
         * 
         * @param[in] tableName_  Name of the table to filter.  This may be the
         *                        ID of a collection, table or a result set
         *                        (for chaining queries).  Collections may be
         *                        filtered only if all tables within the
         *                        collection have the same type ID.
         * @param[in] viewName_  If provided, then this will be the name of the
         *                       view containing the results. Must not be an
         *                       already existing collection, table or view .
         *                       Default value is an empty string.
         * @param[in] expression_  The select expression GPUdb uses to filter
         *                         the specified table.  For details see <a
         *                         href="../../concepts/index.html#expressions"
         *                         target="_top">concepts</a>.
         * @param[in] options_  Optional parameters.  Default value is an empty
         *                      std::map.
         * 
         */
        FilterRequest(const std::string& tableName_, const std::string& viewName_, const std::string& expression_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            viewName( viewName_ ),
            expression( expression_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string viewName;
        std::string expression;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterRequest>
    {
        static void encode(Encoder& e, const gpudb::FilterRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.viewName);
            ::avro::encode(e, v.expression);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::FilterRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableName);
                            break;

                        case 1:
                            ::avro::decode(d, v.viewName);
                            break;

                        case 2:
                            ::avro::decode(d, v.expression);
                            break;

                        case 3:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.viewName);
                ::avro::decode(d, v.expression);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #filter(const FilterRequest&) const}.
     * <p>
     * Filters data based on the specified expression.  The results are stored
     * in a result set with the given @a viewName.
     * <p>
     * For details see <a href="../../concepts/index.html#expressions"
     * target="_top">concepts</a>.
     * <p>
     * The response message contains the number of points for which the
     * expression evaluated to be true, which is equivalent to the size of the
     * result view.
     */
    struct FilterResponse
    {

        /**
         * Constructs a FilterResponse object with default parameter values.
         */
        FilterResponse() :
            count(int64_t())
        {
        }

        int64_t count;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterResponse>
    {
        static void encode(Encoder& e, const gpudb::FilterResponse& v)
        {
            ::avro::encode(e, v.count);
        }

        static void decode(Decoder& d, gpudb::FilterResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.count);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.count);
            }
        }
    };
}

#endif
